/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUUUIDPath : NSObject <Swift>

{
    NSArray *_uuids;
}

@property (nonatomic, readonly) NSArray *uuids;
@property (nonatomic, readonly) NSUUID *lastUUID;
@property (nonatomic, readonly) NSString *UUIDPathString;

+ (id)lastUUIDFromUUIDPathString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithUUIDPathString:(id)arg1;
- (id)UUIDPathByAppendingUUID:(id)arg1;

@end
