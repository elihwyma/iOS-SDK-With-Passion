/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class CLSHandout, NSArray, NSDate, NSString, NSURL;

@interface CLSHandoutAttachment : CLSObject

{
    int _shareType;
    int _permissionType;
    NSURL *_URL;
    NSArray *_contextPath;
    NSString *_title;
    NSString *_bundleIdentifier;
    NSString *_contentStoreIdentifier;
    int _completionStatus;
    long long _displayOrder;
    long long _contextType;
    NSDate *_dateLastCompleted;
    _Bool _locked;
    int _type;
    NSString *_storeIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (retain, nonatomic) NSDate *dateLastCompleted;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (nonatomic, readonly) int type;
@property (nonatomic) int shareType;
@property (nonatomic) int permissionType;
@property (nonatomic) long long contextType;
@property (nonatomic) long long displayOrder;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, readonly) NSArray *assets;
@property (copy, nonatomic) NSArray *contextPath;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (nonatomic, readonly) NSString *parentObjectID;
@property (nonatomic, readonly) CLSHandout *parent;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int completionStatus;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;

+ (_Bool)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)addAsset:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2;

@end
