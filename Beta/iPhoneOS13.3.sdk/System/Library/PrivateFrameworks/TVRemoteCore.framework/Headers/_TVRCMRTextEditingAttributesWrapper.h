/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVRCMRTextEditingAttributesWrapper : NSObject

{
    void *_attributes;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *prompt;
@property (nonatomic, readonly) struct _MRTextInputTraits traits;

- (id)initWithAttributes:(void *)arg1;

@end
