/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions

{
    _Bool _completeDataPromise;
    _Bool _createsPlaceholders;
    _Bool _createAsMobileBackup;
    _Bool _restoreApplicationData;
    NSArray *_items;
}

@property (nonatomic) _Bool completeDataPromise;
@property (nonatomic) _Bool createsPlaceholders;
@property (nonatomic) _Bool createAsMobileBackup;
@property (nonatomic) _Bool restoreApplicationData;
@property (nonatomic, readonly) NSArray *items;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;

@end
