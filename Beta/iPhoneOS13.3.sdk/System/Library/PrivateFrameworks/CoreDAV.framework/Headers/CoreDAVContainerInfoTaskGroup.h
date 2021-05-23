/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSMutableSet, NSSet, NSString;

@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup

{
    int _phase;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    int _containerInfoDepth;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}

@property (nonatomic) int containerInfoDepth;
@property (weak, nonatomic) id <CoreDAVContainerInfoTaskGroupDelegate> delegate;
@property (nonatomic, readonly) NSSet *containerURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (int)containerInfoDepthForURL:(id)arg1;
- (void)_getContainerTopLevelInfo;
- (void)_getContainerHomeSet;

@end
