/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXDocumentController;

@interface SXDocumentControllerContainer : NSObject

{
    SXDocumentController *_documentController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXDocumentController *documentController;

- (void)registerDocumentController:(id)arg1;

@end
