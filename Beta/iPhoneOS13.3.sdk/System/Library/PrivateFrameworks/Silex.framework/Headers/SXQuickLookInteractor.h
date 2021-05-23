/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXQuickLookFile;

@protocol SXQuickLookInteractorDelegate, SXQuickLookService;

@interface SXQuickLookInteractor : NSObject

{
    id <SXQuickLookInteractorDelegate> delegate;
    SXQuickLookFile *_file;
    id <SXQuickLookService> _service;
}

@property (nonatomic, readonly) id <SXQuickLookService> service;
@property (weak, nonatomic) id <SXQuickLookInteractorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXQuickLookFile *file;

- (void)loadThumbnailWithSize:(struct CGSize)arg1;
- (id)initWithFile:(id)arg1 service:(id)arg2;

@end
