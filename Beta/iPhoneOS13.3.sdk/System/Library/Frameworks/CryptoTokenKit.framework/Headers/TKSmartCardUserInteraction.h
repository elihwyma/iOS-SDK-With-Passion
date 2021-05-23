/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject

{
    id <TKSmartCardUserInteractionDelegate> _delegate;
    double _initialTimeout;
    double _interactionTimeout;
}

@property (weak) id <TKSmartCardUserInteractionDelegate> delegate;
@property double initialTimeout;
@property double interactionTimeout;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)cancel;
- (void)runWithReply:(CDUnknownBlockType)arg1;

@end
