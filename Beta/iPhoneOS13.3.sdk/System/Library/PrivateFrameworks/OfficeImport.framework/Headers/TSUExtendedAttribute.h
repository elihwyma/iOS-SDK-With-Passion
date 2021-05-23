/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TSUExtendedAttribute : NSObject <Swift>

{
    NSString *_name;
    NSData *_value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *value;

+ (id)extendedAttributeWithName:(id)arg1 value:(id)arg2;
+ (id)extendedAttributeFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)initFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (id)initFromPathFileSystemRepresentation:(const char *)arg1 name:(id)arg2 forRemoval:(_Bool)arg3 options:(int)arg4 error:(id *)arg5;
- (_Bool)setAttributeToPathFileSystemRepresentation:(const char *)arg1 options:(int)arg2 error:(id *)arg3;
- (_Bool)shouldPreserveForIntent:(unsigned int)arg1;
- (_Bool)setAttributeToPath:(id)arg1 options:(int)arg2 error:(id *)arg3;

@end
