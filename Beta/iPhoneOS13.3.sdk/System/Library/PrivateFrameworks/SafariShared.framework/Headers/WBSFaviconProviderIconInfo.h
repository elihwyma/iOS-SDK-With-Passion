/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WBSFaviconProviderIconInfo : NSObject

{
    _Bool _hasGeneratedResolutions;
    _Bool _isRejectedResource;
    NSString *_pageURLString;
    NSString *_iconURLString;
    NSString *_UUIDString;
    NSDate *_dateAdded;
    struct CGSize _size;
}

@property (copy, nonatomic, readonly) NSString *pageURLString;
@property (copy, nonatomic, readonly) NSString *iconURLString;
@property (copy, nonatomic, readonly) NSString *UUIDString;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) _Bool hasGeneratedResolutions;
@property (nonatomic, readonly) _Bool isRejectedResource;

- (id)init;
- (id)initWithPageURLString:(id)arg1 iconURLString:(id)arg2 UUIDString:(id)arg3 dateAdded:(id)arg4 size:(struct CGSize)arg5 hasGeneratedResolutions:(_Bool)arg6 isRejectedResource:(_Bool)arg7;

@end
