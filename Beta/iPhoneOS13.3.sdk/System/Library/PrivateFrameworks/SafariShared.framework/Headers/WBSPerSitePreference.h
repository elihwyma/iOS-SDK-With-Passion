/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSPerSitePreference : NSObject

{
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;

+ (id)localizedStringForBinaryPreferenceValue:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
