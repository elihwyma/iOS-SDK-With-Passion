/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions

{
    _Bool _completeDataPromise;
    _Bool _createAsMobileBackup;
    NSArray *_items;
}

@property (nonatomic) _Bool completeDataPromise;
@property (nonatomic) _Bool createAsMobileBackup;
@property (nonatomic, readonly) NSArray *items;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;

@end
