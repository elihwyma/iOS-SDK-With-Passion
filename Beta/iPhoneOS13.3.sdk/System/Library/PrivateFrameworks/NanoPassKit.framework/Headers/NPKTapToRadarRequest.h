/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL;

@interface NPKTapToRadarRequest : NSObject

{
    NSURL *_tapToRadarURL;
    NSString *_title;
    NSString *_body;
    NSSet *_attachmentsPaths;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSSet *attachmentsPaths;
@property (nonatomic, readonly) NSURL *tapToRadarURL;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)_attachmentURLs;
- (id)initWithTitle:(id)arg1 body:(id)arg2 attachmentPaths:(id)arg3;

@end
