/*******************************************************************************
 *  (c) 2019 - 2022 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Modules names
static const char* STR_MO_SYSTEM = "System";
static const char* STR_MO_TIMESTAMP = "Timestamp";
static const char* STR_MO_UTILITY = "Utility";
static const char* STR_MO_MULTISIG = "Multisig";
static const char* STR_MO_BALANCES = "Balances";
static const char* STR_MO_ASSETS = "Assets";
static const char* STR_MO_PROXY = "Proxy";
static const char* STR_MO_IDENTITY = "Identity";
static const char* STR_MO_DEMOCRACY = "Democracy";
static const char* STR_MO_GENERALCOUNCIL = "Generalcouncil";
static const char* STR_MO_TECHNICALCOMMITTEE = "Technicalcommittee";
static const char* STR_MO_TREASURY = "Treasury";
static const char* STR_MO_PREIMAGE = "Preimage";
static const char* STR_MO_XCMPQUEUE = "Xcmpqueue";
static const char* STR_MO_DMPQUEUE = "Dmpqueue";
static const char* STR_MO_COLLATORSELECTION = "Collatorselection";
static const char* STR_MO_SESSION = "Session";
static const char* STR_MO_XTOKENS = "Xtokens";
static const char* STR_MO_VESTING = "Vesting";
static const char* STR_MO_LOANS = "Loans";
static const char* STR_MO_PRICES = "Prices";
static const char* STR_MO_CROWDLOANS = "Crowdloans";
static const char* STR_MO_LIQUIDSTAKING = "Liquidstaking";
static const char* STR_MO_GENERALCOUNCILMEMBERSHIP = "Generalcouncilmembership";
static const char* STR_MO_TECHNICALCOMMITTEEMEMBERSHIP = "Technicalcommitteemembership";
static const char* STR_MO_ORACLEMEMBERSHIP = "Oraclemembership";
static const char* STR_MO_LIQUIDSTAKINGAGENTSMEMBERSHIP = "Liquidstakingagentsmembership";
static const char* STR_MO_BRIDGEMEMBERSHIP = "Bridgemembership";
static const char* STR_MO_CROWDLOANSAUTOMATORSMEMBERSHIP = "Crowdloansautomatorsmembership";
static const char* STR_MO_AMM = "Amm";
static const char* STR_MO_AMMROUTE = "Ammroute";
static const char* STR_MO_CURRENCYADAPTER = "Currencyadapter";
static const char* STR_MO_BRIDGE = "Bridge";
static const char* STR_MO_EMERGENCYSHUTDOWN = "Emergencyshutdown";
static const char* STR_MO_FARMING = "Farming";
static const char* STR_MO_STREAMING = "Streaming";
static const char* STR_MO_PARACHAINSYSTEM = "Parachainsystem";

// Methods names
static const char* STR_ME_FILL_BLOCK = "Fill block";
static const char* STR_ME_REMARK = "Remark";
static const char* STR_ME_SET_HEAP_PAGES = "Set heap pages";
static const char* STR_ME_SET_CODE = "Set code";
static const char* STR_ME_SET_CODE_WITHOUT_CHECKS = "Set code without checks";
static const char* STR_ME_REMARK_WITH_EVENT = "Remark with event";
static const char* STR_ME_SET = "Set";
static const char* STR_ME_BATCH = "Batch";
static const char* STR_ME_BATCH_ALL = "Batch all";
static const char* STR_ME_FORCE_BATCH = "Force batch";
static const char* STR_ME_AS_MULTI_THRESHOLD_1 = "As multi threshold 1";
static const char* STR_ME_AS_MULTI = "As multi";
static const char* STR_ME_APPROVE_AS_MULTI = "Approve as multi";
static const char* STR_ME_CANCEL_AS_MULTI = "Cancel as multi";
static const char* STR_ME_TRANSFER = "Transfer";
static const char* STR_ME_SET_BALANCE = "Set balance";
static const char* STR_ME_FORCE_TRANSFER = "Force transfer";
static const char* STR_ME_TRANSFER_KEEP_ALIVE = "Transfer keep alive";
static const char* STR_ME_TRANSFER_ALL = "Transfer all";
static const char* STR_ME_FORCE_UNRESERVE = "Force unreserve";
static const char* STR_ME_CREATE = "Create";
static const char* STR_ME_FORCE_CREATE = "Force create";
static const char* STR_ME_DESTROY = "Destroy";
static const char* STR_ME_MINT = "Mint";
static const char* STR_ME_BURN = "Burn";
static const char* STR_ME_FREEZE = "Freeze";
static const char* STR_ME_THAW = "Thaw";
static const char* STR_ME_FREEZE_ASSET = "Freeze asset";
static const char* STR_ME_THAW_ASSET = "Thaw asset";
static const char* STR_ME_TRANSFER_OWNERSHIP = "Transfer ownership";
static const char* STR_ME_SET_TEAM = "Set team";
static const char* STR_ME_SET_METADATA = "Set metadata";
static const char* STR_ME_CLEAR_METADATA = "Clear metadata";
static const char* STR_ME_FORCE_SET_METADATA = "Force set metadata";
static const char* STR_ME_FORCE_CLEAR_METADATA = "Force clear metadata";
static const char* STR_ME_FORCE_ASSET_STATUS = "Force asset status";
static const char* STR_ME_APPROVE_TRANSFER = "Approve transfer";
static const char* STR_ME_CANCEL_APPROVAL = "Cancel approval";
static const char* STR_ME_FORCE_CANCEL_APPROVAL = "Force cancel approval";
static const char* STR_ME_TRANSFER_APPROVED = "Transfer approved";
static const char* STR_ME_TOUCH = "Touch";
static const char* STR_ME_REFUND = "Refund";
static const char* STR_ME_PROXY = "Proxy";
static const char* STR_ME_ADD_PROXY = "Add proxy";
static const char* STR_ME_REMOVE_PROXY = "Remove proxy";
static const char* STR_ME_REMOVE_PROXIES = "Remove proxies";
static const char* STR_ME_ANONYMOUS = "Anonymous";
static const char* STR_ME_KILL_ANONYMOUS = "Kill anonymous";
static const char* STR_ME_ANNOUNCE = "Announce";
static const char* STR_ME_REMOVE_ANNOUNCEMENT = "Remove announcement";
static const char* STR_ME_REJECT_ANNOUNCEMENT = "Reject announcement";
static const char* STR_ME_PROXY_ANNOUNCED = "Proxy announced";
static const char* STR_ME_ADD_REGISTRAR = "Add registrar";
static const char* STR_ME_CLEAR_IDENTITY = "Clear identity";
static const char* STR_ME_REQUEST_JUDGEMENT = "Request judgement";
static const char* STR_ME_CANCEL_REQUEST = "Cancel request";
static const char* STR_ME_SET_FEE = "Set fee";
static const char* STR_ME_SET_ACCOUNT_ID = "Set account id";
static const char* STR_ME_KILL_IDENTITY = "Kill identity";
static const char* STR_ME_REMOVE_SUB = "Remove sub";
static const char* STR_ME_QUIT_SUB = "Quit sub";
static const char* STR_ME_PROPOSE = "Propose";
static const char* STR_ME_SECOND = "Second";
static const char* STR_ME_EMERGENCY_CANCEL = "Emergency cancel";
static const char* STR_ME_EXTERNAL_PROPOSE = "External propose";
static const char* STR_ME_EXTERNAL_PROPOSE_MAJORITY = "External propose majority";
static const char* STR_ME_EXTERNAL_PROPOSE_DEFAULT = "External propose default";
static const char* STR_ME_FAST_TRACK = "Fast track";
static const char* STR_ME_VETO_EXTERNAL = "Veto external";
static const char* STR_ME_CANCEL_REFERENDUM = "Cancel referendum";
static const char* STR_ME_CANCEL_QUEUED = "Cancel queued";
static const char* STR_ME_DELEGATE = "Delegate";
static const char* STR_ME_UNDELEGATE = "Undelegate";
static const char* STR_ME_CLEAR_PUBLIC_PROPOSALS = "Clear public proposals";
static const char* STR_ME_NOTE_PREIMAGE = "Note preimage";
static const char* STR_ME_NOTE_PREIMAGE_OPERATIONAL = "Note preimage operational";
static const char* STR_ME_NOTE_IMMINENT_PREIMAGE = "Note imminent preimage";
static const char* STR_ME_NOTE_IMMINENT_PREIMAGE_OPERATIONAL = "Note imminent preimage operational";
static const char* STR_ME_REAP_PREIMAGE = "Reap preimage";
static const char* STR_ME_UNLOCK = "Unlock";
static const char* STR_ME_REMOVE_VOTE = "Remove vote";
static const char* STR_ME_REMOVE_OTHER_VOTE = "Remove other vote";
static const char* STR_ME_ENACT_PROPOSAL = "Enact proposal";
static const char* STR_ME_CANCEL_PROPOSAL = "Cancel proposal";
static const char* STR_ME_SET_MEMBERS = "Set members";
static const char* STR_ME_EXECUTE = "Execute";
static const char* STR_ME_VOTE = "Vote";
static const char* STR_ME_CLOSE = "Close";
static const char* STR_ME_DISAPPROVE_PROPOSAL = "Disapprove proposal";
static const char* STR_ME_PROPOSE_SPEND = "Propose spend";
static const char* STR_ME_REJECT_PROPOSAL = "Reject proposal";
static const char* STR_ME_APPROVE_PROPOSAL = "Approve proposal";
static const char* STR_ME_REMOVE_APPROVAL = "Remove approval";
static const char* STR_ME_UNNOTE_PREIMAGE = "Unnote preimage";
static const char* STR_ME_REQUEST_PREIMAGE = "Request preimage";
static const char* STR_ME_UNREQUEST_PREIMAGE = "Unrequest preimage";
static const char* STR_ME_SERVICE_OVERWEIGHT = "Service overweight";
static const char* STR_ME_SUSPEND_XCM_EXECUTION = "Suspend xcm execution";
static const char* STR_ME_RESUME_XCM_EXECUTION = "Resume xcm execution";
static const char* STR_ME_UPDATE_SUSPEND_THRESHOLD = "Update suspend threshold";
static const char* STR_ME_UPDATE_DROP_THRESHOLD = "Update drop threshold";
static const char* STR_ME_UPDATE_RESUME_THRESHOLD = "Update resume threshold";
static const char* STR_ME_UPDATE_THRESHOLD_WEIGHT = "Update threshold weight";
static const char* STR_ME_UPDATE_WEIGHT_RESTRICT_DECAY = "Update weight restrict decay";
static const char* STR_ME_UPDATE_XCMP_MAX_INDIVIDUAL_WEIGHT = "Update xcmp max individual weight";
static const char* STR_ME_SET_INVULNERABLES = "Set invulnerables";
static const char* STR_ME_SET_DESIRED_CANDIDATES = "Set desired candidates";
static const char* STR_ME_SET_CANDIDACY_BOND = "Set candidacy bond";
static const char* STR_ME_REGISTER_AS_CANDIDATE = "Register as candidate";
static const char* STR_ME_LEAVE_INTENT = "Leave intent";
static const char* STR_ME_SET_KEYS = "Set keys";
static const char* STR_ME_PURGE_KEYS = "Purge keys";
static const char* STR_ME_CLAIM = "Claim";
static const char* STR_ME_VESTED_TRANSFER = "Vested transfer";
static const char* STR_ME_UPDATE_VESTING_SCHEDULES = "Update vesting schedules";
static const char* STR_ME_CLAIM_FOR = "Claim for";
static const char* STR_ME_ADD_MARKET = "Add market";
static const char* STR_ME_ACTIVATE_MARKET = "Activate market";
static const char* STR_ME_UPDATE_RATE_MODEL = "Update rate model";
static const char* STR_ME_UPDATE_MARKET = "Update market";
static const char* STR_ME_FORCE_UPDATE_MARKET = "Force update market";
static const char* STR_ME_ADD_REWARD = "Add reward";
static const char* STR_ME_WITHDRAW_MISSING_REWARD = "Withdraw missing reward";
static const char* STR_ME_UPDATE_MARKET_REWARD_SPEED = "Update market reward speed";
static const char* STR_ME_CLAIM_REWARD = "Claim reward";
static const char* STR_ME_CLAIM_REWARD_FOR_MARKET = "Claim reward for market";
static const char* STR_ME_REDEEM = "Redeem";
static const char* STR_ME_REDEEM_ALL = "Redeem all";
static const char* STR_ME_BORROW = "Borrow";
static const char* STR_ME_REPAY_BORROW = "Repay borrow";
static const char* STR_ME_REPAY_BORROW_ALL = "Repay borrow all";
static const char* STR_ME_COLLATERAL_ASSET = "Collateral asset";
static const char* STR_ME_LIQUIDATE_BORROW = "Liquidate borrow";
static const char* STR_ME_ADD_RESERVES = "Add reserves";
static const char* STR_ME_REDUCE_RESERVES = "Reduce reserves";
static const char* STR_ME_REDUCE_INCENTIVE_RESERVES = "Reduce incentive reserves";
static const char* STR_ME_UPDATE_LIQUIDATION_FREE_COLLATERAL = "Update liquidation free collateral";
static const char* STR_ME_SET_PRICE = "Set price";
static const char* STR_ME_RESET_PRICE = "Reset price";
static const char* STR_ME_CREATE_VAULT = "Create vault";
static const char* STR_ME_UPDATE_VAULT = "Update vault";
static const char* STR_ME_OPEN = "Open";
static const char* STR_ME_CONTRIBUTE = "Contribute";
static const char* STR_ME_SET_VRF = "Set vrf";
static const char* STR_ME_REOPEN = "Reopen";
static const char* STR_ME_AUCTION_SUCCEEDED = "Auction succeeded";
static const char* STR_ME_AUCTION_FAILED = "Auction failed";
static const char* STR_ME_WITHDRAW = "Withdraw";
static const char* STR_ME_WITHDRAW_FOR = "Withdraw for";
static const char* STR_ME_SLOT_EXPIRED = "Slot expired";
static const char* STR_ME_MIGRATE_PENDING = "Migrate pending";
static const char* STR_ME_DISSOLVE_VAULT = "Dissolve vault";
static const char* STR_ME_REFUND_FOR = "Refund for";
static const char* STR_ME_STAKE = "Stake";
static const char* STR_ME_UNSTAKE = "Unstake";
static const char* STR_ME_UPDATE_RESERVE_FACTOR = "Update reserve factor";
static const char* STR_ME_UPDATE_STAKING_LEDGER_CAP = "Update staking ledger cap";
static const char* STR_ME_BOND = "Bond";
static const char* STR_ME_BOND_EXTRA = "Bond extra";
static const char* STR_ME_UNBOND = "Unbond";
static const char* STR_ME_REBOND = "Rebond";
static const char* STR_ME_WITHDRAW_UNBONDED = "Withdraw Unbonded";
static const char* STR_ME_NOMINATE = "Nominate";
static const char* STR_ME_FORCE_SET_ERA_START_BLOCK = "Force set era start block";
static const char* STR_ME_FORCE_SET_CURRENT_ERA = "Force set current era";
static const char* STR_ME_FORCE_ADVANCE_ERA = "Force advance era";
static const char* STR_ME_FORCE_MATCHING = "Force matching";
static const char* STR_ME_FORCE_SET_STAKING_LEDGER = "Force set staking ledger";
static const char* STR_ME_SET_CURRENT_ERA = "Set current era";
static const char* STR_ME_SET_STAKING_LEDGER = "Set staking ledger";
static const char* STR_ME_CANCEL_UNSTAKE = "Cancel unstake";
static const char* STR_ME_ADD_MEMBER = "Add member";
static const char* STR_ME_REMOVE_MEMBER = "Remove member";
static const char* STR_ME_SWAP_MEMBER = "Swap member";
static const char* STR_ME_RESET_MEMBERS = "Reset members";
static const char* STR_ME_CHANGE_KEY = "Change key";
static const char* STR_ME_SET_PRIME = "Set prime";
static const char* STR_ME_CLEAR_PRIME = "Clear prime";
static const char* STR_ME_ADD_LIQUIDITY = "Add liquidity";
static const char* STR_ME_REMOVE_LIQUIDITY = "Remove liquidity";
static const char* STR_ME_CREATE_POOL = "Create pool";
static const char* STR_ME_SWAP_EXACT_TOKENS_FOR_TOKENS = "Swap exact tokens for tokens";
static const char* STR_ME_SWAP_TOKENS_FOR_EXACT_TOKENS = "Swap tokens for exact tokens";
static const char* STR_ME_FORCE_SET_LOCK = "Force set lock";
static const char* STR_ME_FORCE_REMOVE_LOCK = "Force remove lock";
static const char* STR_ME_REGISTER_CHAIN = "Register chain";
static const char* STR_ME_UNREGISTER_CHAIN = "Unregister chain";
static const char* STR_ME_REGISTER_BRIDGE_TOKEN = "Register bridge token";
static const char* STR_ME_UNREGISTER_BRIDGE_TOKEN = "Unregister bridge token";
static const char* STR_ME_SET_BRIDGE_TOKEN_FEE = "Set bridge token fee";
static const char* STR_ME_SET_BRIDGE_TOKEN_STATUS = "Set bridge token status";
static const char* STR_ME_SET_BRIDGE_TOKEN_CAP = "Set bridge token cap";
static const char* STR_ME_CLEAN_CAP_ACCUMULATED_VALUE = "Clean cap accumulated value";
static const char* STR_ME_TELEPORT = "Teleport";
static const char* STR_ME_MATERIALIZE = "Materialize";
static const char* STR_ME_TOGGLE_PALLET = "Toggle pallet";
static const char* STR_ME_TOGGLE_CALL = "Toggle call";
static const char* STR_ME_SET_POOL_STATUS = "Set pool status";
static const char* STR_ME_SET_POOL_COOL_DOWN_DURATION = "Set pool cool down duration";
static const char* STR_ME_RESET_POOL_UNLOCK_HEIGHT = "Reset pool unlock height";
static const char* STR_ME_DEPOSIT = "Deposit";
static const char* STR_ME_DISPATCH_REWARD = "Dispatch reward";
static const char* STR_ME_SET_MINIMUM_DEPOSIT = "Set minimum deposit";
static const char* STR_ME_AUTHORIZE_UPGRADE = "Authorize upgrade";
static const char* STR_ME_ENACT_AUTHORIZED_UPGRADE = "Enact authorized upgrade";

// Items names
static const char* STR_IT_ratio = "Ratio";
static const char* STR_IT_remark = "Remark";
static const char* STR_IT_pages = "Pages";
static const char* STR_IT_code = "Code";
static const char* STR_IT_items = "Items";
static const char* STR_IT_keys = "Keys";
static const char* STR_IT_prefix = "Prefix";
static const char* STR_IT_subkeys = "Subkeys";
static const char* STR_IT_now = "Now";
static const char* STR_IT_calls = "Calls";
static const char* STR_IT_index = "Index";
static const char* STR_IT_call = "Call";
static const char* STR_IT_as_origin = "As origin";
static const char* STR_IT_other_signatories = "Other signatories";
static const char* STR_IT_threshold = "Threshold";
static const char* STR_IT_maybe_timepoint = "Maybe timepoint";
static const char* STR_IT_store_call = "Store call";
static const char* STR_IT_max_weight = "Max weight";
static const char* STR_IT_call_hash = "Call hash";
static const char* STR_IT_timepoint = "Timepoint";
static const char* STR_IT_dest = "Dest";
static const char* STR_IT_amount = "Amount";
static const char* STR_IT_who = "Who";
static const char* STR_IT_new_free = "New free";
static const char* STR_IT_new_reserved = "New reserved";
static const char* STR_IT_source = "Source";
static const char* STR_IT_keep_alive = "Keep alive";
static const char* STR_IT_id = "Id";
static const char* STR_IT_admin = "Admin";
static const char* STR_IT_min_balance = "Min balance";
static const char* STR_IT_owner = "Owner";
static const char* STR_IT_is_sufficient = "Is sufficient";
static const char* STR_IT_witness = "Witness";
static const char* STR_IT_beneficiary = "Beneficiary";
static const char* STR_IT_target = "Target";
static const char* STR_IT_issuer = "Issuer";
static const char* STR_IT_freezer = "Freezer";
static const char* STR_IT_name = "Name";
static const char* STR_IT_symbol = "Symbol";
static const char* STR_IT_decimals = "Decimals";
static const char* STR_IT_is_frozen = "Is frozen";
static const char* STR_IT_delegate = "Delegate";
static const char* STR_IT_destination = "Destination";
static const char* STR_IT_allow_burn = "Allow burn";
static const char* STR_IT_real = "Real";
static const char* STR_IT_force_proxy_type = "Force proxy type";
static const char* STR_IT_proxy_type = "Proxy type";
static const char* STR_IT_delay = "Delay";
static const char* STR_IT_spawner = "Spawner";
static const char* STR_IT_height = "Height";
static const char* STR_IT_ext_index = "Ext index";
static const char* STR_IT_account = "Account";
static const char* STR_IT_info = "Info";
static const char* STR_IT_subs = "Subs";
static const char* STR_IT_reg_index = "Reg index";
static const char* STR_IT_max_fee = "Max fee";
static const char* STR_IT_fee = "Fee";
static const char* STR_IT_new_ = "New";
static const char* STR_IT_fields = "Fields";
static const char* STR_IT_judgement = "Judgement";
static const char* STR_IT_sub = "Sub";
static const char* STR_IT_data = "Data";
static const char* STR_IT_proposal_hash = "Proposal hash";
static const char* STR_IT_proposal = "Proposal";
static const char* STR_IT_seconds_upper_bound = "Seconds upper bound";
static const char* STR_IT_ref_index = "Ref index";
static const char* STR_IT_vote = "Vote";
static const char* STR_IT_voting_period = "Voting period";
static const char* STR_IT_which = "Which";
static const char* STR_IT_to = "To";
static const char* STR_IT_conviction = "Conviction";
static const char* STR_IT_balance = "Balance";
static const char* STR_IT_encoded_proposal = "Encoded proposal";
static const char* STR_IT_proposal_len_upper_bound = "Proposal len upper bound";
static const char* STR_IT_maybe_ref_index = "Maybe ref index";
static const char* STR_IT_prop_index = "Prop index";
static const char* STR_IT_new_members = "New members";
static const char* STR_IT_prime = "Prime";
static const char* STR_IT_old_count = "Old count";
static const char* STR_IT_length_bound = "Length bound";
static const char* STR_IT_approve = "Approve";
static const char* STR_IT_proposal_weight_bound = "Proposal weight bound";
static const char* STR_IT_proposal_id = "Proposal id";
static const char* STR_IT_bytes = "Bytes";
static const char* STR_IT_hash = "Hash";
static const char* STR_IT_weight_limit = "Weight limit";
static const char* STR_IT_max = "Max";
static const char* STR_IT_bond = "Bond";
static const char* STR_IT_proof = "Proof";
static const char* STR_IT_currency_id = "Currency id";
static const char* STR_IT_dest_weight = "Dest weight";
static const char* STR_IT_asset = "Asset";
static const char* STR_IT_currencies = "Currencies";
static const char* STR_IT_fee_item = "Fee item";
static const char* STR_IT_assets = "Assets";
static const char* STR_IT_schedule = "Schedule";
static const char* STR_IT_vesting_schedules = "Vesting schedules";
static const char* STR_IT_asset_id = "Asset id";
static const char* STR_IT_market = "Market";
static const char* STR_IT_rate_model = "Rate model";
static const char* STR_IT_collateral_factor = "Collateral factor";
static const char* STR_IT_liquidation_threshold = "Liquidation threshold";
static const char* STR_IT_reserve_factor = "Reserve factor";
static const char* STR_IT_close_factor = "Close factor";
static const char* STR_IT_liquidate_incentive_reserved_factor = "Liquidate incentive reserved factor";
static const char* STR_IT_liquidate_incentive = "Liquidate incentive";
static const char* STR_IT_supply_cap = "Supply cap";
static const char* STR_IT_borrow_cap = "Borrow cap";
static const char* STR_IT_target_account = "Target account";
static const char* STR_IT_supply_reward_per_block = "Supply reward per block";
static const char* STR_IT_borrow_reward_per_block = "Borrow reward per block";
static const char* STR_IT_mint_amount = "Mint amount";
static const char* STR_IT_redeem_amount = "Redeem amount";
static const char* STR_IT_borrow_amount = "Borrow amount";
static const char* STR_IT_repay_amount = "Repay amount";
static const char* STR_IT_enable = "Enable";
static const char* STR_IT_borrower = "Borrower";
static const char* STR_IT_liquidation_asset_id = "Liquidation asset id";
static const char* STR_IT_collateral_asset_id = "Collateral asset id";
static const char* STR_IT_payer = "Payer";
static const char* STR_IT_add_amount = "Add amount";
static const char* STR_IT_receiver = "Receiver";
static const char* STR_IT_reduce_amount = "Reduce amount";
static const char* STR_IT_collaterals = "Collaterals";
static const char* STR_IT_price = "Price";
static const char* STR_IT_crowdloan = "Crowdloan";
static const char* STR_IT_ctoken = "Ctoken";
static const char* STR_IT_lease_start = "Lease start";
static const char* STR_IT_lease_end = "Lease end";
static const char* STR_IT_contribution_strategy = "Contribution strategy";
static const char* STR_IT_cap = "Cap";
static const char* STR_IT_end_block = "End block";
static const char* STR_IT_referral_code = "Referral code";
static const char* STR_IT_flag = "Flag";
static const char* STR_IT_query_id = "Query id";
static const char* STR_IT_response = "Response";
static const char* STR_IT_kind = "Kind";
static const char* STR_IT_liquid_amount = "Liquid amount";
static const char* STR_IT_derivative_index = "Derivative index";
static const char* STR_IT_payee = "Payee";
static const char* STR_IT_num_slashing_spans = "Num slashing spans";
static const char* STR_IT_targets = "Targets";
static const char* STR_IT_block_number = "Block number";
static const char* STR_IT_era = "Era";
static const char* STR_IT_offset = "Offset";
static const char* STR_IT_staking_ledger = "Staking ledger";
static const char* STR_IT_remove = "Remove";
static const char* STR_IT_add = "Add";
static const char* STR_IT_members = "Members";
static const char* STR_IT_pair = "Pair";
static const char* STR_IT_desired_amounts = "Desired amounts";
static const char* STR_IT_minimum_amounts = "Minimum amounts";
static const char* STR_IT_liquidity = "Liquidity";
static const char* STR_IT_liquidity_amounts = "Liquidity amounts";
static const char* STR_IT_lptoken_receiver = "Lptoken receiver";
static const char* STR_IT_lp_token_id = "Lp token id";
static const char* STR_IT_route = "Route";
static const char* STR_IT_amount_in = "Amount in";
static const char* STR_IT_min_amount_out = "Min amount out";
static const char* STR_IT_amount_out = "Amount out";
static const char* STR_IT_max_amount_in = "Max amount in";
static const char* STR_IT_chain_id = "Chain id";
static const char* STR_IT_bridge_token = "Bridge token";
static const char* STR_IT_bridge_token_id = "Bridge token id";
static const char* STR_IT_new_fee = "New fee";
static const char* STR_IT_bridge_type = "Bridge type";
static const char* STR_IT_new_cap = "New cap";
static const char* STR_IT_dest_id = "Dest id";
static const char* STR_IT_src_id = "Src id";
static const char* STR_IT_src_nonce = "Src nonce";
static const char* STR_IT_favour = "Favour";
static const char* STR_IT_pallet_idx = "Pallet idx";
static const char* STR_IT_call_idx = "Call idx";
static const char* STR_IT_reward_asset = "Reward asset";
static const char* STR_IT_lock_duration = "Lock duration";
static const char* STR_IT_cool_down_duration = "Cool down duration";
static const char* STR_IT_is_active = "Is active";
static const char* STR_IT_reward_duration = "Reward duration";
static const char* STR_IT_recipient = "Recipient";
static const char* STR_IT_deposit = "Deposit";
static const char* STR_IT_start_time = "Start time";
static const char* STR_IT_end_time = "End time";
static const char* STR_IT_cancellable = "Cancellable";
static const char* STR_IT_stream_id = "Stream id";
static const char* STR_IT_minimum_deposit = "Minimum deposit";
static const char* STR_IT_message = "Message";
static const char* STR_IT_code_hash = "Code hash";

#ifdef __cplusplus
}
#endif
