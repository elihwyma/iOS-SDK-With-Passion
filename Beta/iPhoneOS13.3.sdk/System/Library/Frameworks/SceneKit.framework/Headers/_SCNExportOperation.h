/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNExportOperation.h>

@class NSDictionary, NSError, NSURL, SCNNode, SCNRenderer, SCNScene;

__attribute__((visibility("hidden")))
@interface _SCNExportOperation : SCNExportOperation

{
    void *_userInfo;
    SEL _didEndSelector;
    SCNScene *_scene;
    struct CGSize _size;
    SCNNode *_pointOfView;
    double _startTime;
    double _endTime;
    double _systemTime;
    _Bool _canceled;
    _Bool _succeded;
    double _progress;
    NSError *_error;
    id _delegate;
    NSDictionary *_attributes;
    NSURL *_outputURL;
    SCNRenderer *_renderer;
    unsigned long long _antialiasingMode;
}

@property (nonatomic) id delegate;
@property (nonatomic) void *userInfo;
@property (nonatomic) SEL didEndSelector;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double progress;
@property (nonatomic) _Bool canceled;
@property (nonatomic) _Bool succeded;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long antialiasingMode;
@property (retain, nonatomic) SCNRenderer *renderer;

- (void)dealloc;
- (void)cancel;

@end
