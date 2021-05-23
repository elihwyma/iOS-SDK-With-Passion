/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface CKDPCSData : NSObject

{
    struct _OpaquePCSShareProtection *_pcs;
    NSString *_etag;
    NSData *_pcsData;
    NSString *_pcsKeyID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *pcsKeyID;
@property (nonatomic, readonly) id <NSSecureCoding> itemID;
@property (nonatomic) struct _OpaquePCSShareProtection *pcs;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSData *pcsData;

+ (_Bool)supportsSecureCoding;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)CKPropertiesDescription;
- (_Bool)shouldEncodePCSData;
- (id)initWithPCSData:(id)arg1;

@end
