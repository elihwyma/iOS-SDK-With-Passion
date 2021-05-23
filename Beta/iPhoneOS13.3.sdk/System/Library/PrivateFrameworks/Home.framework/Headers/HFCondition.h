/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSPredicate, NSString;

@interface HFCondition : NSObject <Swift>

{
    NSPredicate *_predicate;
}

@property (nonatomic, readonly) NSPredicate *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (_Bool)isEqual:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
