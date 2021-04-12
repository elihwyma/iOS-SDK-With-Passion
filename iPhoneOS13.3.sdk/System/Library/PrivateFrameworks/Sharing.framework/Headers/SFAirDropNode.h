//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CURangingMeasurement, NSDate, NSNumber, NSPersonNameComponents, NSSet, NSString, NSUUID;

@interface SFAirDropNode : NSObject
{
    struct __SFOperation _sender;
    NSPersonNameComponents *_nameComponents;
    BOOL _disabled;
    BOOL _me;
    BOOL _unknown;
    BOOL _monogram;
    BOOL _classroom;
    BOOL _classroomGroup;
    BOOL _classroomCourse;
    BOOL _suggestion;
    BOOL _rapport;
    BOOL _supportsCredentials;
    BOOL _supportsFMF;
    BOOL _supportsPasses;
    BOOL _supportsMixedTypes;
    NSDate *_discoveryDate;
    id _node;
    NSString *_contactIdentifier;
    NSString *_realName;
    CGImage _displayIcon;
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

+ (id)nodeWithSFNode:(struct __SFNode )arg1;
@property(readonly) BOOL supportsMixedTypes; // @synthesize supportsMixedTypes=_supportsMixedTypes;
@property(readonly) BOOL supportsPasses; // @synthesize supportsPasses=_supportsPasses;
@property(readonly) BOOL supportsFMF; // @synthesize supportsFMF=_supportsFMF;
@property(readonly) BOOL supportsCredentials; // @synthesize supportsCredentials=_supportsCredentials;
@property long long selectionReason; // @synthesize selectionReason=_selectionReason;
@property(getter=isRapport) BOOL rapport; // @synthesize rapport=_rapport;
@property(getter=isSuggestion) BOOL suggestion; // @synthesize suggestion=_suggestion;
@property(getter=isClassroomCourse) BOOL classroomCourse; // @synthesize classroomCourse=_classroomCourse;
@property(getter=isclassroomGroup) BOOL classroomGroup; // @synthesize classroomGroup=_classroomGroup;
@property(getter=isClassroom) BOOL classroom; // @synthesize classroom=_classroom;
@property(getter=isMonogram) BOOL monogram; // @synthesize monogram=_monogram;
@property(getter=isUnknown) BOOL unknown; // @synthesize unknown=_unknown;
@property(getter=isMe) BOOL me; // @synthesize me=_me;
@property(getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain) NSNumber *suggestionIndex; // @synthesize suggestionIndex=_suggestionIndex;
@property(retain, nonatomic) CURangingMeasurement *rangingMeasurement; // @synthesize rangingMeasurement=_rangingMeasurement;
@property(retain) NSUUID *nodeIdentifier; // @synthesize nodeIdentifier=_nodeIdentifier;
@property(retain) NSSet *handles; // @synthesize handles=_handles;
@property(retain) NSString *transportBundleID; // @synthesize transportBundleID=_transportBundleID;
@property(retain) NSString *model; // @synthesize model=_model;
@property(retain) NSString *secondaryName; // @synthesize secondaryName=_secondaryName;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) CGImage displayIcon; // @synthesize displayIcon=_displayIcon;
@property(retain) NSString *realName; // @synthesize realName=_realName;
@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain) id node; // @synthesize node=_node;
@property(readonly) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
// - (void).cxx_destruct;
- (void)handleOperationCallback:(struct __SFOperation )arg1 event:(long long)arg2 withResults:(id)arg3;
- (void)cancelSend;
- (void)startSendForBundleID:(id)arg1 sessionID:(id)arg2 items:(id)arg3 description:(id)arg4 previewImage:(CGImage )arg5;
- (id)displayNameForLocale:(id)arg1;
- (void)appendDiscoveryInfoToDisplayName:(id)arg1;
- (void)updateDisplayName;
- (void)updateWithSFNode:(struct __SFNode )arg1;
@property(readonly, getter=isKnown) BOOL known;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

