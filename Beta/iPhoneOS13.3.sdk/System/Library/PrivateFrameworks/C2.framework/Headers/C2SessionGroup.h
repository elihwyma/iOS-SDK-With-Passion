/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2Session, NSArray, NSString;

@interface C2SessionGroup : NSObject

{
    NSString *_configurationName;
    C2Session *_pinnedSessionAllowingExpiredDNS;
    C2Session *_pinnedSession;
    C2Session *_unpinnedSession;
}

@property (retain, nonatomic) NSString *configurationName;
@property (retain, nonatomic) C2Session *pinnedSessionAllowingExpiredDNS;
@property (retain, nonatomic) C2Session *pinnedSession;
@property (retain, nonatomic) C2Session *unpinnedSession;
@property (nonatomic, readonly) NSArray *sessions;
@property (nonatomic, readonly) _Bool isEmpty;

- (_Bool)removeSession:(id)arg1;
- (id)initWithConfigurationName:(id)arg1;
- (id)sessionForOptions:(id)arg1;
- (void)setSession:(id)arg1 forOptions:(id)arg2;

@end
