/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernConfiguration : NSObject <Swift>

{
    NSURL *_reportConcernURL;
    long long _itemIdentifier;
    NSString *_reportConcernExplanation;
    NSString *_selectReasonTitle;
    NSString *_selectReasonSubtitle;
    NSString *_privacyNote;
    NSArray *_reasons;
}

@property (copy, nonatomic) NSURL *reportConcernURL;
@property (nonatomic) long long itemIdentifier;
@property (copy, nonatomic) NSString *reportConcernExplanation;
@property (copy, nonatomic) NSString *selectReasonTitle;
@property (copy, nonatomic) NSString *selectReasonSubtitle;
@property (copy, nonatomic) NSString *privacyNote;
@property (copy, nonatomic) NSArray *reasons;

+ (id)configurationWithTemplateElement:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
