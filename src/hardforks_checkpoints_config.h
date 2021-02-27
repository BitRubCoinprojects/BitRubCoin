// Copyright (c) 2017-2021, Sumokoin Projects
// Copyright (c) 2014-2021, The Monero Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Parts of this file are originally copyright (c) 2012-2013 The Cryptonote developers

#pragma once

#include <stdexcept>
#include <string>

//hardforks
#define HF_VERSION_DYNAMIC_FEE                            1
#define HF_VERSION_PER_BYTE_FEE                           7
#define HF_VERSION_BP                                     7   // Bulletproof HF
#define HF_VERSION_SMALLER_BP                             7
#define HF_VERSION_LONG_TERM_BLOCK_WEIGHT                 8
#define HF_VERSION_MIN_2_OUTPUTS                          9
#define HF_VERSION_ENFORCE_MIN_AGE                        9
#define HF_VERSION_EFFECTIVE_SHORT_TERM_MEDIAN_IN_PENALTY 9
#define HF_VERSION_CLSAG                                  10
#define HF_VERSION_DETERMINISTIC_UNLOCK_TIME              10

//checkpoints

// per block checkpoint expectod blocks hashes file hash
#define EXPECTED_BLOCK_HASHES_HASH  "0f19c0ef9139fe3c6a16dea345b21b372f3f188d348b49e9cf90d8920b148739"

// mainnet checkpoints
#define MAINNET_CHECKPOINTS \
    ADD_CHECKPOINT(1, "82e8f378ea29d152146b6317903249751b809e97c0b6655f86e120b9de95c38a"); \
    ADD_CHECKPOINT(10, "e097b62bba41e5fd583d3a68de074cddd77c85a6158b031d963232146494a2d6"); \
    ADD_CHECKPOINT(100, "f3bd44c626cc12d449183ca84b58615d792523ba229385ff6717ab29a3e88926"); \
    ADD_CHECKPOINT(1000, "d284c992cb570f86c2e0bcfaa552b1d73bd40417e1c2a40f82bc6432217f0873"); \
    ADD_CHECKPOINT(3000, "81e040955b710dc5a5056668c4eaf3fbc4da2f72c0a63763250ede32a92e0f06"); \
    ADD_CHECKPOINT(5000, "e838c077bc66356d9bb321d4eb60f0851ef766f0619ddc4c6568a0f149aacea0"); \
    ADD_CHECKPOINT(10000, "360b96c3d0a5202c548672d550700d982ca15ad5627f70bce0a89dda840b3611"); \
    ADD_CHECKPOINT(20000, "603a45b60dd92ef4524c80d58411d09480b4668c54bc08dd651d838832bd399e"); \
    ADD_CHECKPOINT(21300, "d0a76e98ebb4d8e928d931a1807bba11a2fafdf544c119761b0ed6de4e1898cf"); \
    ADD_CHECKPOINT(50000, "ae36641cf06ed788375bfb32f0038cbcd98f1d7bfb09937148fb1a57c6b52dd8"); \
    ADD_CHECKPOINT(75000, "b26f4e1225569da282b77659020bace52e5e89abbdee33e9e52266b1e71803a5"); \
    ADD_CHECKPOINT(100000, "ffe474fe8353f90700c8138ddea3547d5c1e4a6facb1df85897e7a6e4daab540"); \
    ADD_CHECKPOINT(116520, "da1cb8f30305cd5fad7d6c33b3ed88fede053e0926102d8e544b65e93e33a08b"); \
    ADD_CHECKPOINT(137500, "0a50041b952bdc1b1f2c6a5e8749600f545e43ddfa255607b529df95f8945e5d"); \
    ADD_CHECKPOINT(165000, "a15ab984e4c93bff84f617daaed357e28c5eb2fb6c64efa803f4cfba0b69f4a4"); \
    ADD_CHECKPOINT(199800, "d8c7fcfcf605e834b3125b68cc96736e1f1d2f753c79c24db8fb9d6af4b84293"); \
    ADD_CHECKPOINT(225000, "4a63e8c350e2ee31f2c35a290eee99c759cbadd4518dc9f13f24a8365ff62b43"); \
    ADD_CHECKPOINT(250000, "ea4ac947d9f0cdca5997871fb6a9e78f377bba17b5c70b87ce65693bc5032838"); \
    ADD_CHECKPOINT(274000, "49d2579161c277b9d9fe6baba5aabcef1534e9abef93eaa7f17cc8fe229454b0"); \
    ADD_CHECKPOINT(274360, "66c129116187f36980a97333f1c7cf99c21629cc52bc6d591126d3a8fe36b90a"); \
    ADD_CHECKPOINT(300000, "b09b147b23148d2995ff860d9ede9d8d38757c934b6de7945d397fc4e1ab2501"); \
    ADD_CHECKPOINT(320000, "3305f11f07669f156bbe9f9b07523d7b5a6f4c430475ae61c379c1e31984c1fb"); \
    ADD_CHECKPOINT(345000, "d67de29cf089207413686ceb385dbafcc9f7c12690e4a5d4ee9b42c274d2d4b3"); \
    ADD_CHECKPOINT(350000, "d3675de05fed5f6633288adb07ac4982b4c891be6347d9f6edfac9b21dbbd721"); \
    ADD_CHECKPOINT(375000, "405fdfcd94e6acecd0f282f41c0983c1b3437dce84e566f763f2fd683da02ea3"); \
    ADD_CHECKPOINT(394000, "86462c05c540b2df7ac39a8e5d85dc08d191b5cbc1ea59c8e5966bdd2bd28f31"); \
    ADD_CHECKPOINT(405000, "aaf7f8ceb403c3110dbb9256dd10f888524fed90159065400f52e663c1c3733f"); \
    ADD_CHECKPOINT(420000, "a67b28a7ec8785cdaf5d54cd56d5e92fe52dd2cbaa8ee7fab7eb27deb21b65ac"); \
    ADD_CHECKPOINT(435000, "ee11193a62f74d2ed681fd2e9212e9e4061774d9dd90039cc5a4d0b65f2c5522"); \
    ADD_CHECKPOINT(446000, "c50f8599b0c0cf5ad620217e9a496fdfa1f82b485995cfd73a04a1509bb902a2"); \
    ADD_CHECKPOINT(465000, "985a03585380e5a8ba30a2515174c05afbc71a858ec171a1c1a8658df322935e"); \
    ADD_CHECKPOINT(492000, "a2efbec083be4f1aadb1e368e85fc861a3014bcef6e58dad2161b46cc6fa0cea"); \
    ADD_CHECKPOINT(517000, "ea358273567df2cff386d45774f2d0db6aabcb97dc2cbbe8076a654c32ecd3b2");

// testnet checkpoints
#define TESTNET_CHECKPOINTS \
    ADD_CHECKPOINT(1, "770309bd74bcebf90eb6f1197ad51601f917314088c5b1343316a4f581c51193"); \
    ADD_CHECKPOINT(10, "d5f139ed1cdc14ff2dda722de9ee2236f4030d18670e4ef6b41ab74e57a0a816"); \
    ADD_CHECKPOINT(100, "e88c3a0e2c0943c50ec9d7149994137dfe095201027920945038dbfc493e35eb"); \
    ADD_CHECKPOINT(1000, "5b33def41716acc581d891bb10ca3eb05867b16ac16764bf8732f12e2830b2a8"); \
    ADD_CHECKPOINT(10000, "71486869b52ed9f0e99a8d349e122bbe67f957e6b0a0b0361e566bd549b56afe"); \
    ADD_CHECKPOINT(30000, "1136333506ed1a4400cf5efaa318a11046a764924ca203a1d43865839eaee22c"); \
    ADD_CHECKPOINT(50000, "3d251e3802cc5f6721babf8762bc13fdbc57df694c59759f3baba8d28b7d97c0"); \
    ADD_CHECKPOINT(75000, "262c0a4cb5ba9651d12283edc3f9206ef12a93cdf2298e2b82f8b1b793eaee48"); \
    ADD_CHECKPOINT(100000, "5f3036ccbf91f825154d635b5355b202fe28fd17ef8253f4db93fb526641c78a"); \
    ADD_CHECKPOINT(125000, "a37fc6b3bcab2904a1a5bcbedc388844852b065eddafbb00e667a3340c04b2d4"); \
    ADD_CHECKPOINT(145000, "bb1dd8811b9c76c731c08c58cfec3b1e8f973e7a972566481c2f94e834a865f8"); \
    ADD_CHECKPOINT(164000, "adfb46976edc591fe9d0938a2cad4cbeed35cd79a8c75b65c7c420290e7d10a8"); \
    ADD_CHECKPOINT(190000, "2d42389a1fd0946c8084cd6141bf7562cb262093957f268208d068f9adbc9839"); \
    ADD_CHECKPOINT(210000, "1fd6d9669525a94cf5d034972d41a9ff4f57d28f1136bbdea395819d85dcc841"); \
    ADD_CHECKPOINT(225000, "8ee300b366f522f06869baf5c5cdbc7c23863fdf8f9d09be4c4d6618baffa62f");
