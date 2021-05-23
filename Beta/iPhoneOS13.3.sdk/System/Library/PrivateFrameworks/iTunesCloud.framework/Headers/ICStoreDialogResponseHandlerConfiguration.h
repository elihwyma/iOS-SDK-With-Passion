/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@interface ICStoreDialogResponseHandlerConfiguration : NSObject <Swift>

{
    _Bool _allowsHandlingNonAuthenticationDialogs;
    _Bool _shouldRecordLastAuthenticationDialogResponseTime;
}

@property (nonatomic) _Bool allowsHandlingNonAuthenticationDialogs;
@property (nonatomic) _Bool shouldRecordLastAuthenticationDialogResponseTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
