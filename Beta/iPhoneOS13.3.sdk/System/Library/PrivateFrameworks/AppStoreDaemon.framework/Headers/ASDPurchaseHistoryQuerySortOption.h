/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <Swift>

{
    _Bool _ascending;
    NSString *_name;
}

@property (copy) NSString *name;
@property _Bool ascending;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 ascending:(_Bool)arg2;

@end
