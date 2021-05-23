/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSArray, NSString;

@interface HFSimpleDiffableItemGroup : NSObject <Swift>

{
    NSString *_groupIdentifier;
    NSArray *_diffableItems;
}

@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSArray *diffableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
