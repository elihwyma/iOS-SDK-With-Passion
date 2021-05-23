/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol TVTemplateFeaturesManagerDelegate;

@interface TVTemplateFeaturesManager : NSObject

{
    NSMutableDictionary *_contextsByFeature;
    id <TVTemplateFeaturesManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <TVTemplateFeaturesManagerDelegate> delegate;

+ (id)featuresManagerForAppDocument:(id)arg1;

- (void)popContext:(id)arg1 forFeature:(id)arg2;
- (void)pushContext:(id)arg1 forFeature:(id)arg2;
- (id)currentContextForFeature:(id)arg1;
- (id)_contextsForFeature:(id)arg1;
- (long long)_rankForContext:(id)arg1;

@end
