/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface DSArchivePath : NSObject

{
    _Bool _root;
    NSURL *_sourceUrl;
    NSString *_prefix;
}

@property (retain, nonatomic) NSURL *sourceUrl;
@property (retain, nonatomic) NSString *prefix;
@property (nonatomic) _Bool root;

+ (id)archivePathWithSource:(id)arg1 prefix:(id)arg2 root:(_Bool)arg3;

- (id)initWithSource:(id)arg1 prefix:(id)arg2 root:(_Bool)arg3;

@end
