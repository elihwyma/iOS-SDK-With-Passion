/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@interface PRSRankingServerKnobs : NSObject

{
    _Bool _didGetKnobValues;
    _Bool _use_server_default_score;
    _Bool _text_features_demotion;
    _Bool _cook_sqf;
    _Bool _cook_sqf_topdown;
    _Bool _cook_sqf_fallback_qi_cep;
    long long _cat_score_enum;
    double _device_freq_factor;
    double _glance_support_factor;
    double _device_launch_factor;
    double _server_default_score;
    double _server_score_decrement;
    double _device_expert_factor;
    double _std_dev_threshold;
    double _std_dev_factor;
    double _top_server_score_factor;
    double _device_score_ratio;
    double _min_server_score;
    double _min_server_cep;
    double _min_device_cep;
    double _pseudo_zero_cep;
    double _min_unordered_span;
    long long _user_activity_promotion_threshold;
    long long _text_features_num_chars;
    long long _device_freq_window;
    long long _category_promotion_decay;
    double _category_promotion_count_weight;
    double _category_promotion_last_engaged_weight;
    long long _shortcut_window;
    double _min_coreduet_threshold;
}

@property _Bool didGetKnobValues;
@property long long cat_score_enum;
@property double device_freq_factor;
@property double glance_support_factor;
@property double device_launch_factor;
@property _Bool use_server_default_score;
@property double server_default_score;
@property double server_score_decrement;
@property double device_expert_factor;
@property double std_dev_threshold;
@property double std_dev_factor;
@property double top_server_score_factor;
@property double device_score_ratio;
@property double min_server_score;
@property double min_server_cep;
@property double min_device_cep;
@property double pseudo_zero_cep;
@property double min_unordered_span;
@property long long user_activity_promotion_threshold;
@property long long text_features_num_chars;
@property _Bool text_features_demotion;
@property long long device_freq_window;
@property long long category_promotion_decay;
@property double category_promotion_count_weight;
@property double category_promotion_last_engaged_weight;
@property long long shortcut_window;
@property _Bool cook_sqf;
@property _Bool cook_sqf_topdown;
@property _Bool cook_sqf_fallback_qi_cep;
@property double min_coreduet_threshold;

- (id)init;

@end
