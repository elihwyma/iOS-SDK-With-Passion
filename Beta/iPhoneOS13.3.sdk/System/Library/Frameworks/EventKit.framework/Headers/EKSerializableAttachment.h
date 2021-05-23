/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKSerializableObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableAttachment : EKSerializableObject

{
    NSURL *_urlOnDisk;
    NSString *_contentTypeFromServer;
}

@property (retain, nonatomic) NSURL *urlOnDisk;
@property (retain, nonatomic) NSString *contentTypeFromServer;

+ (id)classesForKey;

- (id)initWithAttachment:(id)arg1;
- (id)createAttachment;

@end
