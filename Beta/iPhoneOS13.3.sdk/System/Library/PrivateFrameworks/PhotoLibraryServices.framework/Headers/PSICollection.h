/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PSIObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSString, PSIAsset, PSIDate;

@interface PSICollection : PSIObject <Swift>

{
    PSIDate *_startDate;
    PSIDate *_endDate;
    NSString *_title;
    NSString *_subtitle;
    PSIAsset *_keyAsset;
    unsigned long long _type;
    unsigned long long _numberOfAssets;
    NSDate *_sortDate;
}

@property (readonly) PSIDate *startDate;
@property (readonly) PSIDate *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) PSIAsset *keyAsset;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long numberOfAssets;
@property (readonly) NSDate *sortDate;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAsset:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;
- (id)_initForCopy:(_Bool)arg1;

@end
