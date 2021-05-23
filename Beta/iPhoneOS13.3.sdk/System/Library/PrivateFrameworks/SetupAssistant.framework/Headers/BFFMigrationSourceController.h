/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class BYMigrationSourceController;

@interface BFFMigrationSourceController : NSObject

{
    CDUnknownBlockType _dismissHandler;
    BYMigrationSourceController *_sourceController;
}

@property (retain, nonatomic) BYMigrationSourceController *sourceController;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;

- (void)setFileTransferSession:(id)arg1;
- (id)initWithFileTransferSession:(id)arg1;
- (id)initialViewController;

@end
