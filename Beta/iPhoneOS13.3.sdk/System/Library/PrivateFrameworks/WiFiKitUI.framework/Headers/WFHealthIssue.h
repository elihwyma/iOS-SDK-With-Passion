/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFHealthIssue : NSObject

{
    _Bool _overrideIssue;
    _Bool _chinaDevice;
    unsigned long long _type;
    unsigned long long _category;
    NSString *_issueShortTitle;
    NSString *_issueTitle;
    NSString *_issueDescription;
    NSString *_issueRecommendation;
}

@property (copy, nonatomic) NSString *issueShortTitle;
@property (copy, nonatomic) NSString *issueTitle;
@property (copy, nonatomic) NSString *issueDescription;
@property (copy, nonatomic) NSString *issueRecommendation;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long category;
@property (nonatomic) _Bool chinaDevice;
@property (nonatomic, readonly) NSString *issueDetailText;
@property (nonatomic) _Bool overrideIssue;

+ (id)issueWithType:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned long long)arg1;
- (id)descriptionForType:(unsigned long long)arg1;
- (unsigned long long)categoryForType:(unsigned long long)arg1;
- (id)titleForType:(unsigned long long)arg1;
- (id)shortTitleForType:(unsigned long long)arg1;
- (id)recommendationForType:(unsigned long long)arg1;
- (_Bool)isEqualToHealthIssue:(id)arg1;

@end
