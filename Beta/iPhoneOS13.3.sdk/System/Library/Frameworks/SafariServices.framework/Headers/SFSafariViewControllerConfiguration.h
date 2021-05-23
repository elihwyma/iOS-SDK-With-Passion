/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@interface SFSafariViewControllerConfiguration : NSObject

{
    _Bool _ephemeral;
    _Bool _entersReaderIfAvailable;
    _Bool _barCollapsingEnabled;
    long long _redirectNotificationBehavior;
}

@property (nonatomic) long long _redirectNotificationBehavior;
@property (nonatomic) _Bool entersReaderIfAvailable;
@property (nonatomic) _Bool barCollapsingEnabled;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isEphemeral;
- (void)_setEphemeral:(_Bool)arg1;

@end
