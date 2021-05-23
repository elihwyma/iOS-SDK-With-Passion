/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface FCTodayMarkAsReadTransaction : NSObject

{
    NSString *_articleID;
    long long _articleVersion;
    NSDate *_readDate;
}

@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) long long articleVersion;
@property (copy, nonatomic) NSDate *readDate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3;
- (void)performWithPrivateDataContext:(id)arg1;
- (void)performWithTodayPrivateData:(id)arg1;

@end
