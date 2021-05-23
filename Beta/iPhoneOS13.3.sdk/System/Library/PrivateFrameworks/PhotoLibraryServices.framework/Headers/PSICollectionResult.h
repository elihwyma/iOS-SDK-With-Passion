/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSString, PSIDate;

@interface PSICollectionResult : NSObject <Swift>

{
    NSString *_uuid;
    PSIDate *_startDate;
    PSIDate *_endDate;
    NSString *_title;
    NSString *_subtitle;
    NSString *_keyAssetUUID;
    unsigned long long _type;
    unsigned long long _numberOfAssets;
    NSDate *_sortDate;
}

@property (copy, nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) PSIDate *startDate;
@property (nonatomic, readonly) PSIDate *endDate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic) NSString *keyAssetUUID;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (copy, nonatomic, readonly) NSDate *sortDate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUID:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;

@end
