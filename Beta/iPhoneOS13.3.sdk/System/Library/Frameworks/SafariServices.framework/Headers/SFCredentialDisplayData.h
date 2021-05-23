/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, WBSCredentialMatch;

__attribute__((visibility("hidden")))
@interface SFCredentialDisplayData : NSObject

{
    WBSCredentialMatch *_match;
    NSString *_detail;
    NSDate *_creationDate;
}

@property (nonatomic, readonly) WBSCredentialMatch *match;
@property (copy, nonatomic, readonly) NSString *detail;
@property (nonatomic, readonly) NSDate *creationDate;

+ (id)descriptionForPasswordWithUser:(id)arg1 creationDate:(id)arg2;

- (id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3;

@end
