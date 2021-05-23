/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class BSServiceConnectionEndpoint, NSDictionary, NSURL;

@interface _LSOpenConfiguration : NSObject

{
    _Bool _ignoreAppLinkEnabledProperty;
    _Bool _sensitive;
    _Bool _allowURLOverrides;
    NSDictionary *_frontBoardOptions;
    NSURL *_referrerURL;
    BSServiceConnectionEndpoint *_targetConnectionEndpoint;
}

@property (copy, nonatomic) NSDictionary *frontBoardOptions;
@property (nonatomic) _Bool ignoreOpenStrategy;
@property (nonatomic) _Bool ignoreAppLinkEnabledProperty;
@property (copy, nonatomic) NSURL *referrerURL;
@property (nonatomic, getter=isSensitive) _Bool sensitive;
@property (nonatomic) _Bool allowURLOverrides;
@property (retain, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
