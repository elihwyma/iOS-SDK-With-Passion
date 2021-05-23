/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSSet, NSString;

@interface HFSelectedUserCollection : NSObject <Swift>

{
    unsigned long long _type;
    NSSet *_specificUsers;
}

@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSSet *specificUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)allUsersCollection;
+ (id)currentUserCollection;
+ (id)collectionWithSpecificUsers:(id)arg1;
+ (id)collectionWithResolvedUsers:(id)arg1 inHome:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)resolveSelectedUsersWithHome:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 specificUsers:(id)arg2;

@end
