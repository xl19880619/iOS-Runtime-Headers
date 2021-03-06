/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKDateRangePredicate : NSPredicate {
    NSDate *_endDate;
    NSDate *_startDate;
}

@property(readonly) NSDate * endDate;
@property(readonly) NSDate * startDate;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)startDate;

@end
