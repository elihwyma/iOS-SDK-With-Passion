/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PKDiff : NSObject <Swift>

{
    NSMutableArray *_hunks;
    NSString *_passUniqueID;
    NSData *_passManifestHash;
}

@property (copy, nonatomic) NSString *passUniqueID;
@property (copy, nonatomic) NSData *passManifestHash;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)getHunkForKey:(id)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4;
- (void)removeHunkForKey:(id)arg1;
- (void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
- (void)enumerateHunks:(CDUnknownBlockType)arg1;
- (unsigned long long)_hunkIndexForKey:(id)arg1;
- (_Bool)isEqualToDiff:(id)arg1;
- (long long)hunkCount;
- (void)key:(id *)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4 forHunkAtIndex:(long long)arg5;
- (void)addHunksFromDiff:(id)arg1;
- (id)anyKey;

@end
