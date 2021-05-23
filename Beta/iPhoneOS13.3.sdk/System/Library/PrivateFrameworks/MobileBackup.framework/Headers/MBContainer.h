/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@interface MBContainer : NSObject

{
    NSMutableDictionary *_plist;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int containerType;
@property (nonatomic, readonly) NSString *containerTypeString;
@property (retain, nonatomic) NSString *containerDir;
@property (nonatomic, readonly) NSString *safeHarborDir;
@property (retain, nonatomic) NSDate *datePlacedInSafeHarbor;
@property (nonatomic, readonly) _Bool isSystemContainer;
@property (nonatomic, readonly) _Bool isSystemSharedContainer;
@property (nonatomic, readonly, getter=isSafeHarbor) _Bool safeHarbor;

+ (id)containerWithPropertyList:(id)arg1;
+ (id)containerWithDomainName:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)domain;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyListForBackupProperties;
- (id)propertyListForSafeHarborInfo;

@end
