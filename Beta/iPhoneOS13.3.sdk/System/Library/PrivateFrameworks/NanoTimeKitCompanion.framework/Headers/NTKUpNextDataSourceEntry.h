/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface NTKUpNextDataSourceEntry : NSObject

{
    _Bool _isDonation;
    NSSet *_identifiers;
    NSString *_localizedName;
}

@property (retain, nonatomic) NSSet *identifiers;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) _Bool isDonation;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataSourceIdentifiers:(id)arg1 localizedName:(id)arg2 isDonation:(_Bool)arg3;

@end
