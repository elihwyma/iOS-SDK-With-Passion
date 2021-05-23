/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HFUserHandle : NSObject <Swift>

{
    NSString *_userID;
    unsigned long long _type;
}

@property (copy, nonatomic, readonly) NSString *userID;
@property (nonatomic, readonly) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 userID:(id)arg2;

@end
