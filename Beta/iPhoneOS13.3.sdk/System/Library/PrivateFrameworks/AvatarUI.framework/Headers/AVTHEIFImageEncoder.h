/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSString;

@interface AVTHEIFImageEncoder : NSObject <Swift>

{
    _Bool _useHEICSSequence;
}

@property (nonatomic, readonly) _Bool useHEICSSequence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)HEICSSequenceEncoder;
+ (id)defaultHEICEncoder;

- (id)fileExtension;
- (id)initUsingHeicsSequence:(_Bool)arg1;
- (id)imageFromData:(id)arg1 error:(id *)arg2;
- (id)imageFromURL:(id)arg1 error:(id *)arg2;
- (id)dataFromImage:(id)arg1;

@end
