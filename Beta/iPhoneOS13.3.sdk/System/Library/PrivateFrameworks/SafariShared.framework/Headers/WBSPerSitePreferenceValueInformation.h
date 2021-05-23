/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface WBSPerSitePreferenceValueInformation : NSObject

{
    NSString *_domain;
    NSNumber *_value;
    NSDate *_creationDate;
}

@property (copy, nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSNumber *value;
@property (nonatomic, readonly) NSDate *creationDate;

- (id)initWithDomain:(id)arg1 value:(id)arg2 creationDate:(id)arg3;

@end
