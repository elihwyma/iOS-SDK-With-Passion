//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalAttachmentUtils : NSObject
{
}

+ (id)localRelativePathForLocalAbsoluteURL:(id)arg1 localBaseURL:(id)arg2;
+ (id)getFileSizeForPath:(id)arg1 fileManager:(id)arg2 error:(id )arg3;
+ (id)legacyCalendarDataContainer;
+ (id)legacyAttachmentContainerWithBaseURL:(id)arg1;
+ (id)attachmentContainerForSourceIdentifier:(id)arg1 calendarDataContainer:(id)arg2;
+ (id)attachmentContainerWithBaseURL:(id)arg1;
+ (id)localURLForAttachmentWithRelativePath:(id)arg1 baseURL:(id)arg2;

@end

