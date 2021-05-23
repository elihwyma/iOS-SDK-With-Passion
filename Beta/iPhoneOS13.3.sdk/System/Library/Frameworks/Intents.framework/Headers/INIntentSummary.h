/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface INIntentSummary : NSObject

{
    NSString *_intentIdentifier;
    NSString *_originatingBundleId;
    NSString *_languageCode;
    unsigned long long _containedProperties;
    NSString *_title;
    NSString *_subtitle;
}

@property (copy, nonatomic, readonly) NSString *intentIdentifier;
@property (copy, nonatomic, readonly) NSString *originatingBundleId;
@property (copy, nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) unsigned long long containedProperties;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (id)initWithIntentIdentifier:(id)arg1 originatingBundleId:(id)arg2 languageCode:(id)arg3;

@end
