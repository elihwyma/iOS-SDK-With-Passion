/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface _SLExtensionLazyMatcher : NSObject

{
    NSString *_identifier;
    NSExtension *_extension;
}

@property (nonatomic, readonly) NSExtension *extension;

- (id)initWithIdentifier:(id)arg1;

@end
