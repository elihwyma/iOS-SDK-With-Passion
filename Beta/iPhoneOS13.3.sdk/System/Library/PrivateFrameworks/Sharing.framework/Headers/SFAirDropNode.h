/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CURangingMeasurement, NSDate, NSNumber, NSPersonNameComponents, NSSet, NSString, NSUUID;

@interface SFAirDropNode : NSObject

{
    struct __SFOperation *_sender;
    NSPersonNameComponents *_nameComponents;
    _Bool _disabled;
    _Bool _me;
    _Bool _unknown;
    _Bool _monogram;
    _Bool _classroom;
    _Bool _classroomGroup;
    _Bool _classroomCourse;
    _Bool _suggestion;
    _Bool _rapport;
    _Bool _ultraWideBindCapable;
    _Bool _supportsCredentials;
    _Bool _supportsFMF;
    _Bool _supportsPasses;
    _Bool _supportsMixedTypes;
    NSDate *_discoveryDate;
    id _node;
    NSString *_contactIdentifier;
    NSString *_realName;
    struct CGImage *_displayIcon;
    NSString *_displayName;
    NSString *_secondaryName;
    NSString *_model;
    NSString *_transportBundleID;
    NSSet *_handles;
    NSUUID *_nodeIdentifier;
    CURangingMeasurement *_rangingMeasurement;
    NSNumber *_suggestionIndex;
    long long _selectionReason;
}

@property (readonly) NSDate *discoveryDate;
@property (retain) id node;
@property (retain) NSString *contactIdentifier;
@property (retain) NSString *realName;
@property (retain) struct CGImage *displayIcon;
@property (retain) NSString *displayName;
@property (retain) NSString *secondaryName;
@property (retain) NSString *model;
@property (retain) NSString *transportBundleID;
@property (retain) NSSet *handles;
@property (retain) NSUUID *nodeIdentifier;
@property (retain, nonatomic) CURangingMeasurement *rangingMeasurement;
@property (retain) NSNumber *suggestionIndex;
@property (getter=isDisabled) _Bool disabled;
@property (getter=isMe) _Bool me;
@property (readonly, getter=isKnown) _Bool known;
@property (getter=isUnknown) _Bool unknown;
@property (getter=isMonogram) _Bool monogram;
@property (getter=isClassroom) _Bool classroom;
@property (getter=isclassroomGroup) _Bool classroomGroup;
@property (getter=isClassroomCourse) _Bool classroomCourse;
@property (getter=isSuggestion) _Bool suggestion;
@property (getter=isRapport) _Bool rapport;
@property (getter=isUltraWideBindCapable) _Bool ultraWideBindCapable;
@property long long selectionReason;
@property (readonly) _Bool supportsCredentials;
@property (readonly) _Bool supportsFMF;
@property (readonly) _Bool supportsPasses;
@property (readonly) _Bool supportsMixedTypes;

+ (id)nodeWithSFNode:(struct __SFNode *)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)updateWithSFNode:(struct __SFNode *)arg1;
- (void)updateDisplayName;
- (void)appendDiscoveryInfoToDisplayName:(id)arg1;
- (void)cancelSend;
- (id)displayNameForLocale:(id)arg1;
- (void)startSendForBundleID:(id)arg1 sessionID:(id)arg2 items:(id)arg3 description:(id)arg4 previewImage:(struct CGImage *)arg5;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;

@end
