/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class FCFeedDescriptor, NSString;

@interface NUFeedMetadataAdContextProvider : NSObject <Swift>

{
    FCFeedDescriptor *_feedDescriptor;
}

@property (nonatomic, readonly) FCFeedDescriptor *feedDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFeedDescriptor:(id)arg1;
- (id)adContextValueForKeyPath:(id)arg1;

@end
