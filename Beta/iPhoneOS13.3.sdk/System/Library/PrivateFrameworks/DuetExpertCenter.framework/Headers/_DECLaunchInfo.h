/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _DECLaunchInfo : NSObject

{
    unsigned char _consumerSubtype;
    long long _launchSource;
    NSString *_query;
    NSDictionary *_itemsShownCounts;
}

@property (nonatomic, readonly) long long launchSource;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) unsigned char consumerSubtype;
@property (nonatomic, readonly) NSDictionary *itemsShownCounts;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaunchSource:(long long)arg1 query:(id)arg2 itemsShownCounts:(id)arg3 consumerSubtype:(unsigned char)arg4;

@end
