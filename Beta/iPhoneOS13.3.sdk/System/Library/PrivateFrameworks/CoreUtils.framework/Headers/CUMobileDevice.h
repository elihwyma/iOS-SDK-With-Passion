/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString, NSUUID;

@interface CUMobileDevice : NSObject

{
    _Bool _connected;
    _Bool _paired;
    _Bool _placeholder;
    NSUUID *_identifier;
    NSString *_internalModel;
    NSString *_name;
    NSString *_udid;
    NSString *_wifiAddress;
}

@property (nonatomic) _Bool connected;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *internalModel;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool paired;
@property (nonatomic) _Bool placeholder;
@property (copy, nonatomic) NSString *udid;
@property (copy, nonatomic) NSString *wifiAddress;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
