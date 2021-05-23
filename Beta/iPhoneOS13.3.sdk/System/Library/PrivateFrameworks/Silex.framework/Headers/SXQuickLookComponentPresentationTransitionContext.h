/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXQuickLookFile;

@interface SXQuickLookComponentPresentationTransitionContext : NSObject

{
    SXQuickLookFile *_file;
}

@property (nonatomic, readonly) SXQuickLookFile *file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFile:(id)arg1;

@end
