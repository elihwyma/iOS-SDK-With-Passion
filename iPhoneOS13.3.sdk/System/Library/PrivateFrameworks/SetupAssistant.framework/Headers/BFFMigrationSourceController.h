//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BYMigrationSourceController;

@interface BFFMigrationSourceController : NSObject
{
    id /* CDUnknownBlockType */ _dismissHandler;
    BYMigrationSourceController *_sourceController;
}

@property(retain, nonatomic) BYMigrationSourceController *sourceController; // @synthesize sourceController=_sourceController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissHandler; // @synthesize dismissHandler=_dismissHandler;
// - (void).cxx_destruct;
- (void)setFileTransferSession:(id)arg1;
- (id)initialViewController;
- (id)initWithFileTransferSession:(id)arg1;

@end

