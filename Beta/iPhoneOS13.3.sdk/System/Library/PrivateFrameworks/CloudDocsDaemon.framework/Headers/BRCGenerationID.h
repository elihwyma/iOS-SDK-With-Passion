/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSData, NSNumber, NSString;

@interface BRCGenerationID : NSObject <Swift>

{
    unsigned int _generationID;
    NSData *_signature;
}

@property (nonatomic, readonly) NSNumber *fsGenerationID;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSString *generationIDString;
@property (nonatomic, readonly) const char *UTF8String;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)initWithRelativePath:(id)arg1;
- (id)initWithFSGenerationID:(unsigned int)arg1;
- (_Bool)isEqualToFSGenerationID:(unsigned int)arg1;
- (_Bool)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2;
- (id)initWithSignature:(const void *)arg1 length:(unsigned long long)arg2;

@end
