/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol AXRemoteElementChildrenDelegate;

@interface AXRemoteElement : NSObject

{
    NSString *_uuid;
    int _remotePid;
    unsigned int _contextId;
    _Bool _onClientSide;
    NSMutableSet *_allChildren;
    _Bool _deniesDirectAppConnection;
    unsigned int _machPort;
    id <AXRemoteElementChildrenDelegate> _remoteChildrenDelegate;
    id _accessibilityContainer;
}

@property (nonatomic) int remotePid;
@property (nonatomic) unsigned int contextId;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic, readonly) unsigned long long uuidHash;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) _Bool onClientSide;
@property (weak, nonatomic) id <AXRemoteElementChildrenDelegate> remoteChildrenDelegate;
@property (weak, nonatomic) id accessibilityContainer;
@property (nonatomic) _Bool deniesDirectAppConnection;

+ (void)initialize;
+ (_Bool)_isSerializableAccessibilityElement;
+ (id)remoteElementForBlock:(CDUnknownBlockType)arg1;
+ (id)remoteElementsForBlock:(CDUnknownBlockType)arg1;
+ (id)remoteElementsForContextId:(unsigned int)arg1;
+ (_Bool)registerRemoteElement:(id)arg1;

- (void)dealloc;
- (id)description;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityElements;
- (void)unregister;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityResponderElement;
- (id)_accessibilityHandwritingElement;
- (void)platformCleanup;
- (void)_getRemoteValuesOffMainThread:(CDUnknownBlockType)arg1;
- (id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(_Bool)arg2;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (void)getLeafElementsFromRemoteSide:(CDUnknownBlockType)arg1;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityFirstElement;
- (id)_accessibilityLastElement;
- (_Bool)_accessibilityIsGroupedParent;
- (id)_accessibilitySortedElementsWithin;
- (unsigned long long)_accessibilityAutomationType;

@end
