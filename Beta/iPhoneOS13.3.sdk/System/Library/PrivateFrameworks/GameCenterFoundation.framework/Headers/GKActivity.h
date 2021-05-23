/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_activity;

@interface GKActivity : NSObject

{
    unsigned int _mode;
    NSString *_name;
    NSObject<OS_os_activity> *_parent;
    NSObject<OS_os_activity> *_activity;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int mode;
@property (retain, nonatomic) NSObject<OS_os_activity> *parent;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;

+ (id)activity;
+ (void)execute:(CDUnknownBlockType)arg1;
+ (id)detached;
+ (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;
+ (id)named:(id)arg1;
+ (id)currentOrNew;

- (void)execute:(CDUnknownBlockType)arg1;
- (id)child;
- (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (void)createActivity;
- (id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned int)arg3;
- (id)named:(id)arg1;

@end
