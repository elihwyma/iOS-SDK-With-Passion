/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNRegulatoryLogger : NSObject

{
    struct ct_green_tea_logger_s *_log;
}

@property (nonatomic, readonly) struct ct_green_tea_logger_s *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)readingContactsData;
- (void)modifyingContactsData;
- (void)readAndTransmittingContactsData;

@end
